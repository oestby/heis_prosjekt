pipeline {
    agent { dockerfile true }
    
    stages {
        stage('Build') {
            steps {
                sh '''
                touch this_should_be_in_a_container.txt
                npm --version
                gcc --version
                '''
                sh 'echo "I am done building stuff"'
            }
        }
        stage('UnitTests') {
            steps {
                sh 'echo "I am now testing stuff"'
            }
        }
    }
    post {
        always {
            sh 'echo "do cleanup"'
        }
    }
}